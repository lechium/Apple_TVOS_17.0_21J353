//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CNContainerGuardianStateDirtyDescription
{
}

- (void)setCNValue:(id)arg1 onContainer:(id)arg2;	// IMP=0x000000000000dea4
- (id)CNValueForContainer:(id)arg1;	// IMP=0x000000000000de6c
- (_Bool)isWritable;	// IMP=0x000000000000de64
- (Class)valueClass;	// IMP=0x000000000000de53
- (id)key;	// IMP=0x000000000000de3f
- (id)CNValueFromABValue:(void *)arg1;	// IMP=0x0000000000047c40
- (void *)ABValueFromCNValue:(id)arg1;	// IMP=0x0000000000047be8
- (_Bool)setABValue:(void *)arg1 onABSource:(void *)arg2 error:(struct __CFError **)arg3;	// IMP=0x0000000000047b42
- (int)abPropertyID;	// IMP=0x0000000000047b33

@end
