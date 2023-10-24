//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "IDSDestination.h"

@class IDSURI;

@interface IDSDestinationURI : IDSDestination
{
    IDSURI *_uri;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000000ea5cd
- (void).cxx_destruct;	// IMP=0x00000000000eaa5a
@property(readonly, nonatomic) IDSURI *uri; // @synthesize uri=_uri;
- (id)description;	// IMP=0x00000000000ea9c1
- (id)destinationLightweightStatus;	// IMP=0x00000000000ea8f7
- (id)destinationURIs;	// IMP=0x00000000000ea862
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ea857
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000ea7e7
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ea70e
- (id)initWithURIString:(id)arg1;	// IMP=0x00000000000ea643
- (id)initWithURI:(id)arg1;	// IMP=0x00000000000ea5d5

@end

