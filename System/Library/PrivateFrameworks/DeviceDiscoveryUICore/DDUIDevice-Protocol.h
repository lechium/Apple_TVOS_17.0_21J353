//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DeviceDiscoveryUICore/NSObject-Protocol.h>

@class NSString;

@protocol DDUIDevice <NSObject>
@property(readonly, nonatomic) _Bool isMine;
@property(readonly, nonatomic) unsigned int deviceType;
@property(readonly, nonatomic) NSString *accountIdentifier;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) NSString *model;
@property(readonly, nonatomic) NSString *name;
@end
