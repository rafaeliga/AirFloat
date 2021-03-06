//
//  AirFloatAdView.h
//  AdView
//
//  Created by Kristian Trenskow on 2/28/12.
//  Copyright (c) 2012 The Famous Software Company. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AirFloatAdView : UIView {
    
    NSInteger _currentImage;
    NSArray* _images;
    BOOL _isAnimating;
    
}

@property (nonatomic,readonly) BOOL isAnimating;
@property (nonatomic,retain) NSArray* images;

- (void)startAnimation;
- (void)stopAnimation;

@end
