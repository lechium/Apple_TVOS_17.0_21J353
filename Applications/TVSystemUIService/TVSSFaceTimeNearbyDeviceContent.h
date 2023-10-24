//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSystemPanelUI/TVSPContent.h>

@class NSUUID, TUNearbyDeviceHandle;

@interface TVSSFaceTimeNearbyDeviceContent : TVSPContent
{
    NSUUID *_conversationID;	// 8 = 0x8
    TUNearbyDeviceHandle *_nearbyDeviceHandle;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000840f0
@property(readonly, nonatomic) TUNearbyDeviceHandle *nearbyDeviceHandle; // @synthesize nearbyDeviceHandle=_nearbyDeviceHandle;
@property(readonly, nonatomic) NSUUID *conversationID; // @synthesize conversationID=_conversationID;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000084050
- (id)initWithNearbyDeviceHandle:(id)arg1 conversationID:(id)arg2;	// IMP=0x0010000000083ea0

@end

