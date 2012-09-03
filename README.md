# nearmap.com HyperVision C++ Technical Test

## Constraints
* Must be written in C++
* Recommended to build and run on Ubnutu Linux (9.04 or above).  Windows also accepted (but not prefered).
* Recommended to use the Qt SDK (http://qt.nokia.com/downloads/).  Stub project provided.  Boost also accepted (by not prefered).

## Task

* Calculate a red, gree and blue histogram for an image and write to an output file in the format described below.  *It should be optimized for performance (e.g. multi-threaded).*
* Create a unit test to validate the results.

## Output format

An ascii text file containing one line for each colour band in the image (in the order red, green, blue).  Each line is a comma separated list of the pixel count for each colour value (0-255).

## Submission instructions
* Full source code and project files required to build.
* The histogram file for the provided image.
* Submission must include all the source files and a compiled executable in a 
* zip/rar file - submitted to your agent or nearmap contact.
* DO NOT send pull requests against this repository for two reasons:
  * We don't want executables checked into source control
  * We don't want other candidates to see your solution.