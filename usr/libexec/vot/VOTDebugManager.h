//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol VOTElementManagementProtocol;

@interface VOTDebugManager : NSObject
{
    id <VOTElementManagementProtocol> _elementManager;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x004000000011b01f
- (void).cxx_destruct;	// IMP=0x002000000011b0ff
@property(retain, nonatomic) id <VOTElementManagementProtocol> elementManager; // @synthesize elementManager=_elementManager;
- (void)dealloc;	// IMP=0x001000000011b0a3
- (id)init;	// IMP=0x001000000011b074

@end
