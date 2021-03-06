/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

@interface VSViewControllerPresentationStack : NSObject {
    id /* block */  _currentWorkBlock;
    <VSViewControllerPresentationStackDelegate> * _delegate;
    <VSPresentableViewController> * _presentingViewController;
    NSMutableArray * _viewControllers;
    NSMutableArray * _workBlocks;
}

@property (nonatomic, copy) id /* block */ currentWorkBlock;
@property (nonatomic) <VSViewControllerPresentationStackDelegate> *delegate;
@property (nonatomic) <VSPresentableViewController> *presentingViewController;
@property (nonatomic, retain) NSMutableArray *viewControllers;
@property (nonatomic, retain) NSMutableArray *workBlocks;

- (void).cxx_destruct;
- (void)_notifyRootViewControllerDidAppear:(id)arg1;
- (void)_updatePresentedViewControllerAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)_workBlocksDidChange;
- (id /* block */)currentWorkBlock;
- (id)delegate;
- (void)dismissAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithPresentingViewController:(id)arg1;
- (void)popToRootViewControllerAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)popViewControllerAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (id)presentingViewController;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)replaceAllViewControllersWithViewController:(id)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)replaceLastViewControllerWithViewController:(id)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)setCurrentWorkBlock:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)setViewControllers:(id)arg1;
- (void)setWorkBlocks:(id)arg1;
- (id)viewControllers;
- (id)workBlocks;

@end
