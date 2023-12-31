//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MRDAVRouteExtendedInfo, NSDictionary;

@interface MRDMediaServerAVRoute
{
    NSDictionary *_routeDescription;	// 8 = 0x8
    MRDAVRouteExtendedInfo *_extendedInfo;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000907b3
- (_Bool)matchesUniqueIdentifier:(id)arg1;	// IMP=0x0010000000090796
- (id)extendedInfo;	// IMP=0x001000000009073a
- (id)dictionary;	// IMP=0x0010000000090725
- (_Bool)canBeDefaultSystemRoute;	// IMP=0x001000000009071d
- (_Bool)canBeDefaultRoute;	// IMP=0x0010000000090715
- (_Bool)isSpeakerRoute;	// IMP=0x00100000000906b5
- (_Bool)isPicked;	// IMP=0x00100000000904ea
- (_Bool)isOutputRoute;	// IMP=0x00100000000904e2
- (_Bool)isInputRoute;	// IMP=0x00100000000904da
- (id)modelName;	// IMP=0x001000000009048a
- (id)type;	// IMP=0x0010000000090463
- (id)name;	// IMP=0x001000000009043c
- (id)uniqueIdentifier;	// IMP=0x0010000000090415
- (id)description;	// IMP=0x0010000000090399
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000090333
- (unsigned long long)hash;	// IMP=0x0010000000090232
- (id)initWithDictionary:(id)arg1;	// IMP=0x00100000000901b8

@end

