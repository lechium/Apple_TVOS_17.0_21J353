//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _MPCPlayerRepeatCommand
{
    _Bool _supportsChangeRepeat;	// 8 = 0x8
    _Bool _supportsAdvanceRepeat;	// 9 = 0x9
    long long _currentRepeatType;	// 16 = 0x10
    NSArray *_supportedRepeatTypes;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000023e7d8
@property(nonatomic) _Bool supportsAdvanceRepeat; // @synthesize supportsAdvanceRepeat=_supportsAdvanceRepeat;
@property(nonatomic) _Bool supportsChangeRepeat; // @synthesize supportsChangeRepeat=_supportsChangeRepeat;
@property(retain, nonatomic) NSArray *supportedRepeatTypes; // @synthesize supportedRepeatTypes=_supportedRepeatTypes;
@property(nonatomic) long long currentRepeatType; // @synthesize currentRepeatType=_currentRepeatType;
- (id)advance;	// IMP=0x000000000023e474
- (id)setRepeatType:(long long)arg1;	// IMP=0x000000000023e281

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

