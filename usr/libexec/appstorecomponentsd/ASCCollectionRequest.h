//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ASCCollectionRequest : NSObject
{
    NSString *_id;	// 8 = 0x8
    NSString *_kind;	// 16 = 0x10
    NSString *_context;	// 24 = 0x18
    long long _limit;	// 32 = 0x20
    NSString *_clientID;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000008d0a
- (void).cxx_destruct;	// IMP=0x002000000000974f
@property(readonly, copy, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
@property(readonly, nonatomic) long long limit; // @synthesize limit=_limit;
@property(readonly, copy, nonatomic) NSString *context; // @synthesize context=_context;
@property(readonly, copy, nonatomic) NSString *kind; // @synthesize kind=_kind;
@property(readonly, copy, nonatomic) NSString *id; // @synthesize id=_id;
- (id)_collectionRequestWithClientID:(id)arg1;	// IMP=0x0010000000009631
- (id)description;	// IMP=0x00100000000094c6
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000000917e
- (unsigned long long)hash;	// IMP=0x0010000000009052
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000009047
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000008f0b
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000008d12
- (id)initWithID:(id)arg1 kind:(id)arg2 context:(id)arg3 limit:(long long)arg4;	// IMP=0x0010000000008c0f

@end

