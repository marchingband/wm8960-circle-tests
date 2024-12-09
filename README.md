comment out PCM stuff in lib/sound/i2ssoundbasedevice.cpp  
change gain in lib/sound/wm8960soundcontroller.cpp  
`../../makeall`  
  
`faust -lang c -o greyhole.h greyhole.dsp`  
add `#import "dsp"`
  
`make`  
