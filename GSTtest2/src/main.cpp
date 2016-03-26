#include <gst/gst.h>
#include <opencv2/opencv.hpp>
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"

using namespace cv;
using namespace std;

int main(int argc, char *argv[]) {

	Mat img = imread("/home/kuba/workspace/GSTtest2/Debug/alpaca.jpg", CV_LOAD_IMAGE_UNCHANGED);
	if (img.empty())
		{
	          cout << "Error : Image cannot be loaded..!!" << endl;
	          return -1;
	     }
	namedWindow("MyWindow", CV_WINDOW_AUTOSIZE);
	imshow("MyWindow", img);
	waitKey(0);
	destroyWindow("MyWindow");

	/*
	GstElement *pipeline;
	GstBus *bus;
	GstMessage *msg;

	gst_init (&argc, &argv);

	pipeline = gst_parse_launch ("v4l2src ! xvimagesink", NULL);

	gst_element_set_state (pipeline, GST_STATE_PLAYING);

	bus = gst_element_get_bus (pipeline);
	msg = gst_bus_timed_pop_filtered (bus, GST_CLOCK_TIME_NONE, (GstMessageType)(GST_MESSAGE_ERROR | GST_MESSAGE_EOS));

	if (msg != NULL)
		gst_message_unref (msg);
	gst_object_unref (bus);
	gst_element_set_state (pipeline, GST_STATE_NULL);
	gst_object_unref (pipeline);
	*/

	return 0;
}
