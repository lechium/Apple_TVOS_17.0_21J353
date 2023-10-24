//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/MKFHomeManagerHomePublicExtensions-Protocol.h>
#import <HomeKitDaemon/MKFModel-Protocol.h>

@class HMDHomeManagerHomeHandle, MKFHomeManagerHomeDatabaseID, NSDate, NSNumber;
@protocol MKFHomeManager;

@protocol MKFHomeManagerHome <MKFModel, MKFHomeManagerHomePublicExtensions>
@property(readonly, copy, nonatomic) MKFHomeManagerHomeDatabaseID *databaseID;
@property(retain, nonatomic) id <MKFHomeManager> homeManagerPrimary;
@property(readonly, retain, nonatomic) id <MKFHomeManager> homeManager;
@property(copy, nonatomic) NSDate *writerTimestamp;
@property(retain, nonatomic) HMDHomeManagerHomeHandle *handle;
@property(copy, nonatomic) NSNumber *deleted;
@end

