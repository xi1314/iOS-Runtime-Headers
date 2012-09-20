/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class <IUModalContextDelegate>, NSString, UIViewController;

@interface IUModalContext : NSObject  {
    NSString *_defaultControllerIdentifier;
    <IUModalContextDelegate> *_delegate;
    UIViewController *_parentViewController;
    int _tag;
    UIViewController *_viewController;
}

@property(readonly) UIViewController * viewController;
@property(readonly) BOOL beginsPlaybackAfterDismiss;
@property <IUModalContextDelegate> * delegate;
@property(retain) NSString * defaultControllerIdentifier;
@property(readonly) BOOL hideIndexBar;
@property id parentViewController;
@property int tag;


- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void)setParentViewController:(id)arg1;
- (id)viewController;
- (int)tag;
- (void)setTag:(int)arg1;
- (id)parentViewController;
- (BOOL)shouldHideContainerNavigationBar;
- (void)setDefaultControllerIdentifier:(id)arg1;
- (BOOL)hideIndexBar;
- (id)defaultControllerIdentifier;
- (void)configureRootNavigationItem:(id)arg1 navigationBar:(id)arg2;
- (void)configureCell:(id)arg1 forIndex:(unsigned int)arg2 dataSource:(id)arg3;
- (BOOL)shouldSelectIndex:(unsigned int)arg1 dataSource:(id)arg2;
- (BOOL)shouldSetEditing:(BOOL)arg1;
- (void)handleSelectionForIndex:(unsigned int)arg1 dataSource:(id)arg2;
- (id)newTabBarController;
- (void)configureNavigationItem:(id)arg1;
- (BOOL)beginsPlaybackAfterDismiss;
- (void)configureDataSource:(id)arg1;
- (BOOL)canHandleSelectionForIndex:(unsigned int)arg1 dataSource:(id)arg2;
- (id)copyQueryForQuery:(id)arg1;
- (int)allowedMediaTypesForMediaTypes:(int)arg1;
- (void)dismissWithSuccess:(BOOL)arg1;

@end