//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MNAnnouncementPlanEvent;

__attribute__((visibility("hidden")))
@interface MNAnnouncementConflict : NSObject
{
    _Bool _announcementsAreSimilar;	// 8 = 0x8
    MNAnnouncementPlanEvent *_firstEvent;	// 16 = 0x10
    MNAnnouncementPlanEvent *_secondEvent;	// 24 = 0x18
    double _timeGap;	// 32 = 0x20
    double _desiredTimeGap;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000086ba
@property(nonatomic) _Bool announcementsAreSimilar; // @synthesize announcementsAreSimilar=_announcementsAreSimilar;
@property(nonatomic) double desiredTimeGap; // @synthesize desiredTimeGap=_desiredTimeGap;
@property(nonatomic) double timeGap; // @synthesize timeGap=_timeGap;
@property(retain, nonatomic) MNAnnouncementPlanEvent *secondEvent; // @synthesize secondEvent=_secondEvent;
@property(retain, nonatomic) MNAnnouncementPlanEvent *firstEvent; // @synthesize firstEvent=_firstEvent;
- (id)description;	// IMP=0x0000000000008513

@end

