//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TVSSSleepTimerController;

@interface TVSSSleepTimerMenuItemProvider
{
    TVSSSleepTimerController *_sleepTimerController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000008e3b0
@property(retain, nonatomic) TVSSSleepTimerController *sleepTimerController; // @synthesize sleepTimerController=_sleepTimerController;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x001000000008e260
- (id)newMenuItem;	// IMP=0x001000000008e1b0
- (_Bool)shouldShowMenuItem;	// IMP=0x001000000008e150
- (void)dealloc;	// IMP=0x001000000008e0e0
- (id)initWithSleepTimerController:(id)arg1;	// IMP=0x001000000008dfd0

@end

