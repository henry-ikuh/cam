#!/bin/sh
ffmpeg -f video4linux2 -i /dev/v4l/by-id/usb-046d_0809_F15A496F-video-index0 -f webm file.webm
