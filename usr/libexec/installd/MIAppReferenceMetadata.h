//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface MIAppReferenceMetadata : NSObject
{
    NSArray *_personas;	// 8 = 0x8
}

+ (id)referenceMetadataFromURL:(id)arg1 error:(id *)arg2;	// IMP=0x00200000000285d5
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000028138
- (void).cxx_destruct;	// IMP=0x0020000000028a13
@property(retain, nonatomic) NSArray *personas; // @synthesize personas=_personas;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000028961
- (_Bool)serializeToURL:(id)arg1 error:(id *)arg2;	// IMP=0x001000000002839c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000282cb
- (unsigned long long)hash;	// IMP=0x0010000000028287
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000028217
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000028140
- (id)init;	// IMP=0x0010000000028109

@end

