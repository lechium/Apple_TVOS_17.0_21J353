//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface AVStreamDataAssetInspector
{
    NSArray *_trackIDs;	// 8 = 0x8
}

- (id)trackIDs;	// IMP=0x0000000000107e14
- (long long)trackCount;	// IMP=0x0000000000107df7
- (_Bool)providesPreciseDurationAndTiming;	// IMP=0x0000000000107def
- (CDStruct_1b6d18a9)duration;	// IMP=0x0000000000107dd1
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000107dc9
- (void)dealloc;	// IMP=0x0000000000107d87
- (id)initWithTrackIDs:(id)arg1;	// IMP=0x0000000000107d29

@end

