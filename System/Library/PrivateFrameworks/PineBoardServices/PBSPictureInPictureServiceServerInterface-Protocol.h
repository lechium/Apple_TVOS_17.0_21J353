//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PineBoardServices/NSObject-Protocol.h>

@class NSNumber;

@protocol PBSPictureInPictureServiceServerInterface <NSObject>
- (oneway void)expandPictureInPicture;
- (oneway void)movePictureInPicture;
- (oneway void)cancelPictureInPictureFromPlayerInterface:(NSNumber *)arg1;
- (void)fetchCurrentPictureInPictureStateWithReply:(void (^)(PBSPictureInPictureState *, NSError *))arg1;
@end

