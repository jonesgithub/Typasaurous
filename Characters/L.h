

#import <Foundation/Foundation.h>



@interface L : UIGestureRecognizer  {
    CGPoint     lastPreviousPoint; 
    CGPoint     lastCurrentPoint;
    CGFloat     lineLengthSoFar; 
	int x; // for states

}
@end