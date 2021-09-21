#!/usr/bin/env python3

import sys
try:
    import cv2
    import imutils
    import argparse
except ImportError as e:
    print(f'[ERROR] {e}')
    print('[INFO] Please run the following command(s) to install the required module(s) :')
    print('\t\t\t pip3 install opencv-python')
    print('\t\t\t pip3 install imutils')
    print('\t\t\t pip3 install argparse')
    sys.exit(1)


def detect(frame):
    bounding_box_cordinates, weights = HOGCV.detectMultiScale(
        frame, winStride=(4, 4), padding=(8, 8), scale=1.03)

    person = 1
    for x, y, w, h in bounding_box_cordinates:
        cv2.rectangle(frame, (x, y), (x+w, y+h), (0, 255, 0), 2)
        cv2.putText(frame, f'person {person}', (x, y),
                    cv2.FONT_HERSHEY_SIMPLEX, 0.5, (191, 255, 0), 1)
        person += 1

    cv2.putText(frame, 'Status : Detecting ', (40, 40),
                cv2.FONT_HERSHEY_DUPLEX, 0.8, (255, 255, 0), 2)
    cv2.putText(frame, f'Person detected : {person-1}',
                (40, 70), cv2.FONT_HERSHEY_DUPLEX, 0.8, (255, 255, 0), 2)
    cv2.imshow('Detecting', frame)

    return frame


def detectByPathVideo(path, writer):

    video = cv2.VideoCapture(path)
    check, frame = video.read()
    if not check:
        sys.exit('Video Not Found. Please Enter a Valid Absolute/Relational Path')

    print('Detecting people...')
    while video.isOpened():
        # check is True if reading was successful
        check, frame = video.read()

        if check:
            frame = imutils.resize(frame, width=min(800, frame.shape[1]))
            frame = detect(frame)

            if writer is not None:
                writer.write(frame)

            key = cv2.waitKey(1)
            if key == ord('q'):
                break
        else:
            break
    video.release()
    cv2.destroyAllWindows()


def detectByCamera(writer):
    video = cv2.VideoCapture(0)
    print('Detecting people...')

    while True:
        frame = video.read()

        frame = detect(frame)
        if writer is not None:
            writer.write(frame)

        key = cv2.waitKey(1)
        if key == ord('q'):
            break

    video.release()
    cv2.destroyAllWindows()


def detectByPathImage(path):
    image = cv2.imread(path)

    image = imutils.resize(image, width=min(800, image.shape[1]))

    result_image = detect(image)

    cv2.waitKey(0)
    cv2.destroyAllWindows()


def humanDetector(args):
    image_path = args["image"]
    video_path = args['video']
    if str(args["camera"]) == 'true':
        camera = True
    else:
        camera = False

    writer = None
    if camera:
        print('[INFO] Opening Web Cam.')
        print('[INFO] Press Ctrl-C to stop.')
        detectByCamera(writer)
    elif video_path is not None:
        print('[INFO] Opening Video from path.')
        print('[INFO] Press Ctrl-C to stop.')
        detectByPathVideo(video_path, writer)
    elif image_path is not None:
        print('[INFO] Opening Image from path.')
        print('[INFO] Press Ctrl-C to stop.')
        detectByPathImage(image_path)


def argsParser():
    arg_parse = argparse.ArgumentParser()
    arg_parse.add_argument("-v", "--video", default=None,
                           help="path to Video File ")
    arg_parse.add_argument("-i", "--image", default=None,
                           help="path to Image File ")
    arg_parse.add_argument("-c", "--camera", default=False,
                           help="Set true if you want to use the camera.")
    args = vars(arg_parse.parse_args())

    return args


if __name__ == "__main__":
    try:
        HOGCV = cv2.HOGDescriptor()
        HOGCV.setSVMDetector(cv2.HOGDescriptor_getDefaultPeopleDetector())
        args = argsParser()
        humanDetector(args)
    except KeyboardInterrupt:
        sys.exit("[INFO] User Requested An Interrupt.\n[INFO] Quitting...")
