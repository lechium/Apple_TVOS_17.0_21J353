//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface MRDAVRouteExtendedInfo : NSObject
{
    _Bool _canBeDefaultRoute;	// 8 = 0x8
    _Bool _canBeSystemDefaultRoute;	// 9 = 0x9
    _Bool _inputRoute;	// 10 = 0xa
    _Bool _outputRoute;	// 11 = 0xb
    NSDictionary *_route;	// 16 = 0x10
}

+ (id)extendedInfoWithRoute:(id)arg1;	// IMP=0x0040000000055b2e
- (void).cxx_destruct;	// IMP=0x0020000000055cf3
@property(readonly, nonatomic, getter=isOutputRoute) _Bool outputRoute; // @synthesize outputRoute=_outputRoute;
@property(readonly, nonatomic, getter=isInputRoute) _Bool inputRoute; // @synthesize inputRoute=_inputRoute;
@property(readonly, nonatomic) _Bool canBeSystemDefaultRoute; // @synthesize canBeSystemDefaultRoute=_canBeSystemDefaultRoute;
@property(readonly, nonatomic) _Bool canBeDefaultRoute; // @synthesize canBeDefaultRoute=_canBeDefaultRoute;
@property(readonly, nonatomic) NSDictionary *route; // @synthesize route=_route;
- (id)_extendedInfo;	// IMP=0x0010000000055ca8
@property(readonly, nonatomic) NSString *deviceIdentifier;
@property(readonly, nonatomic) NSString *modelName;
@property(readonly, nonatomic) _Bool requiresPIN;
- (id)initWithRoute:(id)arg1;	// IMP=0x0010000000055b7f

@end

