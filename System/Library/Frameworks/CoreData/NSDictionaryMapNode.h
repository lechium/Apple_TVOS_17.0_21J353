//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface NSDictionaryMapNode
{
    id *_attributes;	// 48 = 0x30
    id _attributesAsEncoded;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000008b3e8
+ (void)initialize;	// IMP=0x001000000008b390
- (id)valueForKey:(id)arg1;	// IMP=0x000000000008b9ef
- (void)dealloc;	// IMP=0x000000000008b923
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000008b7d2
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000008b3f0
- (id)initWithValues:(id *)arg1 objectID:(id)arg2;	// IMP=0x000000000008b3a1

@end

