//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString, _TtC12mediaremoted14MRDNearbyGroup;

@interface _TtC12mediaremoted19MRDNearbyInvitation : NSObject
{
}

+ (void)createWithNearbyGroup:(_TtC12mediaremoted14MRDNearbyGroup *)arg1 displayName:(NSString *)arg2 routeType:(unsigned char)arg3 completion:(void (^)(_TtC12mediaremoted19MRDNearbyInvitation *, NSError *))arg4;	// IMP=0x002000000014a3c0
- (id)init;	// IMP=0x004000000014a680
@property(nonatomic, readonly) NSString *identifier;
@property(nonatomic, readonly) NSData *invitationData;

@end

