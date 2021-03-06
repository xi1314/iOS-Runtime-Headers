/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVInfoListInfo : NSObject {
    NSArray * _dataViews;
    NSString * _group;
    UIView * _headerContentView;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _headerMargin;
    float  _lineSpacing;
    float  _width;
}

@property (nonatomic, copy) NSArray *dataViews;
@property (nonatomic, copy) NSString *group;
@property (nonatomic, retain) UIView *headerContentView;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } headerMargin;
@property (nonatomic) float lineSpacing;
@property (nonatomic) float width;

- (void).cxx_destruct;
- (id)dataViews;
- (id)group;
- (id)headerContentView;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })headerMargin;
- (float)lineSpacing;
- (void)setDataViews:(id)arg1;
- (void)setGroup:(id)arg1;
- (void)setHeaderContentView:(id)arg1;
- (void)setHeaderMargin:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setLineSpacing:(float)arg1;
- (void)setWidth:(float)arg1;
- (float)width;

@end
