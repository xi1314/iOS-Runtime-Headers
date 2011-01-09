/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSMutableArray, UIImage;



@interface GKImageBackgroundView : GKBackgroundView 
{
    NSMutableArray *_imageViews;
    UIImage *_backgroundImage;
}

@property(retain,readonly) UIImage *backgroundImage;
@property(retain) NSMutableArray *imageViews;


- (id)imageViews;
- (void)setImageViews:(id)arg1;
- (id)backgroundImage;
- (void)dealloc;
- (void)layoutSubviews;

@end