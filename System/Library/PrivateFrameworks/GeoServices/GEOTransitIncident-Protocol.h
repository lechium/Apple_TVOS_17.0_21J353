//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/NSObject-Protocol.h>

@class NSArray, NSDate, NSString;

@protocol GEOTransitIncident <NSObject>
@property(readonly, nonatomic) NSArray *affectedEntities;
@property(readonly, nonatomic, getter=isBlockingIncident) _Bool blockingIncident;
@property(readonly, nonatomic) NSDate *lastUpdated;
@property(readonly, nonatomic) NSDate *creationDate;
@property(readonly, nonatomic) int iconType;
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) NSDate *startDate;
@property(readonly, nonatomic) NSString *messageForNonRoutable;
@property(readonly, nonatomic) NSString *messageForRouteStepping;
@property(readonly, nonatomic) NSString *messageForRoutePlanning;
@property(readonly, nonatomic) NSString *fullDescription;
@property(readonly, nonatomic) NSString *summary;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) unsigned long long muid;
@end

