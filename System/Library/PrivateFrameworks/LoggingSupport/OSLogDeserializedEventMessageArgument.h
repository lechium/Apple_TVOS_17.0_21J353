//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, _OSLogEventSerializationMetadata;

__attribute__((visibility("hidden")))
@interface OSLogDeserializedEventMessageArgument
{
    NSDictionary *_backingDict;	// 8 = 0x8
    _OSLogEventSerializationMetadata *_metadata;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000492f7
@property(readonly, nonatomic) _OSLogEventSerializationMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) NSDictionary *backingDict; // @synthesize backingDict=_backingDict;
- (long double)longDoubleValue;	// IMP=0x000000000004928b
- (double)doubleValue;	// IMP=0x000000000004923b
- (long long)int64Value;	// IMP=0x00000000000491f7
- (unsigned long long)unsignedInt64Value;	// IMP=0x00000000000491b3
- (id)_numValue;	// IMP=0x000000000004910b
- (unsigned short)rawBytesLength;	// IMP=0x0000000000049016
- (const void *)rawBytes;	// IMP=0x0000000000048ef1
- (id)objectRepresentation;	// IMP=0x0000000000048cf2
- (unsigned long long)scalarType;	// IMP=0x0000000000048bca
- (unsigned long long)scalarCategory;	// IMP=0x0000000000048aa2
- (unsigned long long)category;	// IMP=0x000000000004897a
- (unsigned long long)privacy;	// IMP=0x0000000000048852
- (unsigned long long)availability;	// IMP=0x000000000004872a
- (id)initWithDict:(id)arg1 metadata:(id)arg2;	// IMP=0x0000000000048688

@end
