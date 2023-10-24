//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface OSLogDeserializedEventDecomposedMessage
{
    NSDictionary *_backingDict;	// 8 = 0x8
    NSArray *_segments;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000480fd
@property(readonly, nonatomic) NSArray *segments; // @synthesize segments=_segments;
@property(readonly, nonatomic) NSDictionary *backingDict; // @synthesize backingDict=_backingDict;
- (id)argumentAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000048049
- (id)placeholderAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000047fad
- (id)literalPrefixAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000047f11
- (unsigned long long)state;	// IMP=0x0000000000047de9
- (unsigned long long)placeholderCount;	// IMP=0x0000000000047cc1
- (id)initWithDict:(id)arg1 metadata:(id)arg2;	// IMP=0x000000000004787e

@end

