#include <fcntl.h>
#include <stdio.h>

// Authors : Mahdi Abdinejadi, Jon Kristensen


// This fuction is for test only
int main (int args,char **argv )
{
  int result = is_camera_available();
  if (result == 0)
    {
      printf("Disconnected\n");
    }
  else
    {
      printf("Connected\n");
    }
  return 0;
}

// Return 0 if camera is connected otherwise 1
// It only checks availability of the Microsoft... web cam.
int is_camera_available()
{
  if(open("/dev/v4l/by-id/usb-Microsoft_Microsoft_LifeCam_NX-3000-video-index0", O_RDWR) == 3)
  {
    return 1; // Connected
  }
  else
  {
    return 0; // Disconnected
  }
}
