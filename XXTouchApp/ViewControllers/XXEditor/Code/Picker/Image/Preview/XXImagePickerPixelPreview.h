//
//  XXImagePickerPixelPreview.h
//  XXTouchApp
//
//  Created by Zheng on 13/10/2016.
//  Copyright © 2016 Zheng. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface XXImagePickerPixelPreview : UIWindow
@property (nonatomic, strong) UIImage *imageToMagnify;
@property (nonatomic, assign) CGPoint pointToMagnify;

@end