//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/MKFModel-Protocol.h>
#import <HomeKitDaemon/MKFZonePublicExtensions-Protocol.h>

@class MKFZoneDatabaseID, NSArray, NSDate, NSString;
@protocol MKFHome, MKFRoom;

@protocol MKFZone <MKFModel, MKFZonePublicExtensions>
@property(readonly, copy, nonatomic) MKFZoneDatabaseID *databaseID;
@property(readonly, retain, nonatomic) NSArray *rooms;
@property(readonly, retain, nonatomic) id <MKFHome> home;
@property(copy, nonatomic) NSDate *writerTimestamp;
@property(copy, nonatomic) NSString *name;
- (void)removeRoomsObject:(id <MKFRoom>)arg1;
- (void)addRoomsObject:(id <MKFRoom>)arg1;
@end

