//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextInput/TIKeyboardOutput.h>

__attribute__((visibility("hidden")))
@interface _UIInputViewKeyboardOutput : TIKeyboardOutput
{
    _Bool _didBeginOutput;	// 8 = 0x8
}

+ (id)outputWithKeyboardOutput:(id)arg1;	// IMP=0x00100000009c26a2
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000009c2476
@property(nonatomic) _Bool didBeginOutput; // @synthesize didBeginOutput=_didBeginOutput;
- (void)setHandwritingStrokesToDelete:(id)arg1;	// IMP=0x00000000009c2777
- (void)setShortcutConversion:(id)arg1;	// IMP=0x00000000009c2771
- (void)setInsertionTextAfterSelection:(id)arg1;	// IMP=0x00000000009c276b
- (void)setForwardDeletionCount:(unsigned long long)arg1;	// IMP=0x00000000009c2765
- (void)setTextToCommit:(id)arg1;	// IMP=0x00000000009c275f
- (void)setAcceptedCandidate:(id)arg1;	// IMP=0x00000000009c2759
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000009c24dc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000009c247e

// Remaining properties
@property(nonatomic) long long positionOffset;

@end

