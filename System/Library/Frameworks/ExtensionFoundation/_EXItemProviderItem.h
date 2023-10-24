//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCoder, NSError, NSString, NSUUID;
@protocol NSObject><NSSecureCoding;

__attribute__((visibility("hidden")))
@interface _EXItemProviderItem : NSObject
{
    NSString *_typeIdentifier;	// 8 = 0x8
    NSUUID *_payloadIdentifier;	// 16 = 0x10
    NSError *_error;	// 24 = 0x18
    id <NSObject><NSSecureCoding> _payload;	// 32 = 0x20
    NSCoder *_encodedPayload;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000345c3
- (void).cxx_destruct;	// IMP=0x000000000003494e
@property(retain) NSCoder *encodedPayload; // @synthesize encodedPayload=_encodedPayload;
@property(readonly) id <NSObject><NSSecureCoding> payload; // @synthesize payload=_payload;
@property(readonly) NSError *error; // @synthesize error=_error;
@property(readonly) NSUUID *payloadIdentifier; // @synthesize payloadIdentifier=_payloadIdentifier;
@property(readonly) NSString *typeIdentifier; // @synthesize typeIdentifier=_typeIdentifier;
- (id)payloadOfClasses:(id)arg1;	// IMP=0x0000000000034828
- (id)payloadOfClass:(Class)arg1;	// IMP=0x000000000003478b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000034709
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000345cb
- (id)initWithTypeIdentifier:(id)arg1 error:(id)arg2;	// IMP=0x0000000000034533
- (id)initWithTypeIdentifier:(id)arg1 payload:(id)arg2;	// IMP=0x0000000000034486

@end

