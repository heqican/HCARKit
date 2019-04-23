//
//  HCARWorldViewController.h
//  HCARKitDetectionimage
//
//  Created by 何其灿 on 2019/4/16.
//  Copyright © 2019 松小宝. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <ARKit/ARKit.h>
#import <SceneKit/SceneKit.h>

NS_ASSUME_NONNULL_BEGIN

//AR世界追踪场景
typedef enum : NSUInteger {
    ARWorldTrackingConfigurationType_detectionImage,//图片识别
    ARWorldTrackingConfigurationType_planeDetection,//平面捕捉
    ARWorldTrackingConfigurationType_faceTracking,//人脸识别
    ARWorldTrackingConfigurationType_faceTrackingBlendShapes,//表情检测
} ARWorldTrackingConfigurationType;

@interface HCARWorldViewController : UIViewController
@property (nonatomic, assign) ARWorldTrackingConfigurationType arType;//AR追踪类型
@end

NS_ASSUME_NONNULL_END
