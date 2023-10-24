//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AvatarKit/NSObject-Protocol.h>

@class AVTPhysicsController, NSString, SCNNode;

@protocol AVTPhysicsControllerDelegate <NSObject>
- (double)physicsController:(AVTPhysicsController *)arg1 downforceForNodeNamed:(NSString *)arg2;
- (SCNNode *)avatarNodeForPhysicsController:(AVTPhysicsController *)arg1;
@end

