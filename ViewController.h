//
//  ViewController.h
//  CFTMidRollSample
//
//  Created by CF-NB on 2023/11/5.
//

#import <UIKit/UIKit.h>
#import <iMFADTV/iMFADTV.h>

@interface ViewController : UIViewController<MFPreRollDelegate> {
    MFPreRollView *midroll;
}


@end

