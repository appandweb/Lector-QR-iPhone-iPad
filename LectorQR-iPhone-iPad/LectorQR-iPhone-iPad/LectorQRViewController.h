//
//  LectorQRViewController.h
//  LectorQR-iPhone-iPad
//
//  Created by Ruben on 14/02/14.
//  Copyright (c) 2014 AppAndWeb. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface LectorQRViewController : UIViewController <AVCaptureMetadataOutputObjectsDelegate>{
     AVCaptureVideoPreviewLayer *_previewLayer;
}

@end
