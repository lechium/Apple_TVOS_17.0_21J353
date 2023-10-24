//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol TVSSVideoMicModule <NSObject>
@property(readonly, nonatomic, getter=isUnavailable) _Bool unavailable;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled;
@property(readonly, nonatomic, getter=isSupported) _Bool supported;
@property(readonly, nonatomic) NSString *enabledSystemImageName;
@property(readonly, nonatomic) NSString *systemImageName;
@property(readonly, nonatomic) NSString *displayName;
@end
