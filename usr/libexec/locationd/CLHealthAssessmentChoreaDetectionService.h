//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol CLHealthAssessmentResultDelegate;

@interface CLHealthAssessmentChoreaDetectionService
{
    id <CLHealthAssessmentResultDelegate> _delegate;	// 8 = 0x8
}

@property(nonatomic) id <CLHealthAssessmentResultDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onResultAvailable:(struct ChoreaScore)arg1;	// IMP=0x001000000053abe4
- (void)feedTremor:(id)arg1;	// IMP=0x001000000053aafe
- (void)feedGyro:(id)arg1;	// IMP=0x001000000053aaf8
- (void)feedAccelSample:(CDStruct_869f9c67)arg1 time:(double)arg2;	// IMP=0x001000000053aacf
- (void)dealloc;	// IMP=0x001000000053aa3b
- (id)init;	// IMP=0x001000000053a8fc

@end

