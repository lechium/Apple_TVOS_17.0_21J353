//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSystemPanelUI/TVSPPlatterController.h>

@class NSDictionary, TVSSSleepTimerController;

@interface TVSSSleepTimerPanelPlatterController : TVSPPlatterController
{
    TVSSSleepTimerController *_sleepTimerController;	// 8 = 0x8
    NSDictionary *_sleepRequestsByIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000002a660
@property(retain, nonatomic) NSDictionary *sleepRequestsByIdentifier; // @synthesize sleepRequestsByIdentifier=_sleepRequestsByIdentifier;
@property(retain, nonatomic) TVSSSleepTimerController *sleepTimerController; // @synthesize sleepTimerController=_sleepTimerController;
- (void)rendererWasSelected:(id)arg1 context:(id)arg2;	// IMP=0x001000000002a110
- (id)initWithSleepTimerController:(id)arg1;	// IMP=0x0010000000029470

@end
