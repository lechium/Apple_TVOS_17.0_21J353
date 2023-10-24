//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "IDSDestination.h"

@class IDSURI;

@interface IDSDestinationDevice : IDSDestination
{
    IDSURI *_destinationURI;	// 8 = 0x8
    _Bool _isGuest;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000001c76da
+ (_Bool)isDeviceURI:(id)arg1;	// IMP=0x00600000001c7301
- (void).cxx_destruct;	// IMP=0x00000000001c787a
@property(nonatomic) _Bool isGuest; // @synthesize isGuest=_isGuest;
@property(retain, nonatomic) IDSURI *destinationURI; // @synthesize destinationURI=_destinationURI;
- (id)destinationURIs;	// IMP=0x00000000001c77b1
- (_Bool)isDevice;	// IMP=0x00000000001c77a9
- (id)description;	// IMP=0x00000000001c76e2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001c763d
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001c7591
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001c7586
- (id)initWithURI:(id)arg1 isGuest:(_Bool)arg2;	// IMP=0x00000000001c7507
- (id)initWithDeviceURI:(id)arg1;	// IMP=0x00000000001c748c
- (id)initWithIDSDeviceURI:(id)arg1;	// IMP=0x00000000001c73c9
- (id)initWithRapportPublicIdentifierURI:(id)arg1;	// IMP=0x00000000001c731d

@end
