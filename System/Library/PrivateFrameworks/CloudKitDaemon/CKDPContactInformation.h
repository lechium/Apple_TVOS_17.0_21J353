//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface CKDPContactInformation : PBCodable
{
    NSString *_containerScopedUserId;	// 8 = 0x8
    NSString *_emailAddress;	// 16 = 0x10
    NSString *_firstName;	// 24 = 0x18
    NSString *_lastName;	// 32 = 0x20
    NSString *_phoneNumber;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000027383b
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(retain, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(retain, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(retain, nonatomic) NSString *containerScopedUserId; // @synthesize containerScopedUserId=_containerScopedUserId;
@property(retain, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002736bf
- (unsigned long long)hash;	// IMP=0x0000000000273620
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002734e8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002733d0
- (void)copyTo:(id)arg1;	// IMP=0x000000000027330d
- (void)writeTo:(id)arg1;	// IMP=0x0000000000273259
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000027324c
- (id)dictionaryRepresentation;	// IMP=0x0000000000272f74
- (id)description;	// IMP=0x0000000000272ec5
@property(readonly, nonatomic) _Bool hasPhoneNumber;
@property(readonly, nonatomic) _Bool hasLastName;
@property(readonly, nonatomic) _Bool hasFirstName;
@property(readonly, nonatomic) _Bool hasContainerScopedUserId;
@property(readonly, nonatomic) _Bool hasEmailAddress;

@end

