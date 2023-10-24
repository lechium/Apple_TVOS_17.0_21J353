//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ShareSheet/NSObject-Protocol.h>

@class NSArray, UIPrintInteractionController, UIPrintPaper, UIViewController;

@protocol UIPrintInteractionControllerDelegate <NSObject>

@optional
- (long long)printInteractionController:(UIPrintInteractionController *)arg1 chooseCutterBehavior:(NSArray *)arg2;
- (double)printInteractionController:(UIPrintInteractionController *)arg1 cutLengthForPaper:(UIPrintPaper *)arg2;
- (void)printInteractionControllerDidFinishJob:(UIPrintInteractionController *)arg1;
- (void)printInteractionControllerWillStartJob:(UIPrintInteractionController *)arg1;
- (void)printInteractionControllerDidDismissPrinterOptions:(UIPrintInteractionController *)arg1;
- (void)printInteractionControllerWillDismissPrinterOptions:(UIPrintInteractionController *)arg1;
- (void)printInteractionControllerDidPresentPrinterOptions:(UIPrintInteractionController *)arg1;
- (void)printInteractionControllerWillPresentPrinterOptions:(UIPrintInteractionController *)arg1;
- (UIPrintPaper *)printInteractionController:(UIPrintInteractionController *)arg1 choosePaper:(NSArray *)arg2;
- (UIViewController *)printInteractionControllerParentViewController:(UIPrintInteractionController *)arg1;
@end

