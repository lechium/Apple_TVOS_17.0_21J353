//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/MKFActionPublicExtensions-Protocol.h>
#import <HomeKitDaemon/MKFModel-Protocol.h>

@class MKFActionDatabaseID, NSDate;
@protocol MKFActionSet, MKFHome;

@protocol MKFAction <MKFModel, MKFActionPublicExtensions>
@property(readonly) id <MKFHome> home;
@property(readonly, copy, nonatomic) MKFActionDatabaseID *databaseID;
@property(readonly, retain, nonatomic) id <MKFActionSet> actionSet;
@property(copy, nonatomic) NSDate *writerTimestamp;
@end

