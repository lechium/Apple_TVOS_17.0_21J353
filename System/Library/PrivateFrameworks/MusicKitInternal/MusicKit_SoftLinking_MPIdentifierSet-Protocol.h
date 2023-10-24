//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MusicKitInternal/NSObject-Protocol.h>

@class MusicKit_SoftLinking_CatalogID, MusicKit_SoftLinking_DeviceLocalID, NSArray, NSString;
@protocol MusicKit_SoftLinking_MPIdentifierSet;

@protocol MusicKit_SoftLinking_MPIdentifierSet <NSObject>
@property(readonly, copy, nonatomic) NSArray *musicKit_identifierSetSources;
@property(readonly, nonatomic) _Bool musicKit_hasValidIdentifier;
@property(readonly, copy, nonatomic) NSString *musicKit_playbackID;
@property(readonly, copy, nonatomic) MusicKit_SoftLinking_DeviceLocalID *musicKit_deviceLocalID;
@property(readonly, copy, nonatomic) NSString *musicKit_purchasedAdamID;
@property(readonly, copy, nonatomic) NSString *musicKit_libraryID;
@property(readonly, copy, nonatomic) NSString *musicKit_cloudID;
@property(readonly, copy, nonatomic) MusicKit_SoftLinking_CatalogID *musicKit_catalogID;
- (_Bool)intersectsSet:(id <MusicKit_SoftLinking_MPIdentifierSet>)arg1;
@end

