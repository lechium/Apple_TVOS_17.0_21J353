//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVMLKit/NSObject-Protocol.h>

@class AVPlayerItemAccessLog, AVPlayerItemErrorLog, NSArray, NSDate;
@protocol AVContentKeyRecipient;

@protocol TVPlayerItemImpl <NSObject>
@property(copy, nonatomic) NSArray *navigationMarkerGroups;
@property(copy, nonatomic) NSArray *interstitialTimeRanges;
@property(copy, nonatomic) NSArray *externalMetadata;
@property(readonly, nonatomic) id <AVContentKeyRecipient> contentKeyRecipient;
@property(readonly, nonatomic) NSArray *timedMetadata;
@property(readonly, nonatomic, getter=isPlayable) _Bool playable;
@property(readonly, nonatomic) CDStruct_198678f7 duration;
@property(readonly, nonatomic) _Bool hasVideo;
- (AVPlayerItemErrorLog *)errorLog;
- (AVPlayerItemAccessLog *)accessLog;
- (NSDate *)currentDate;
@end
