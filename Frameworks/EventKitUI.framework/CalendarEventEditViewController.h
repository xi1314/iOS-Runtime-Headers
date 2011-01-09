/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class CalendarEventEditOverlayView;



@interface CalendarEventEditViewController : CalendarBaseViewController 
{
    CalendarEventEditOverlayView *_contentView;
}


- (void)calendarEditingDidFinish:(id)arg1;
- (void)occurrencesChanged:(id)arg1;
- (BOOL)isAddingNewEvent;
- (BOOL)isDirty;
- (void)cleanUp;
- (void)loadView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg1;
- (BOOL)isEditing;
- (void)dealloc;
- (id)initWithModel:(id)arg1;

@end