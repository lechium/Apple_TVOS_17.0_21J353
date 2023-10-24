//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, VCImageAttributeRules;

__attribute__((visibility("hidden")))
@interface SDPMediaLine : NSObject
{
    NSMutableArray *_attributes;	// 8 = 0x8
    VCImageAttributeRules *_imageAttributeRules;	// 16 = 0x10
    NSMutableArray *_payloads;	// 24 = 0x18
    unsigned int _rtpId;	// 32 = 0x20
    int _rtcpPort;	// 36 = 0x24
    int _rtpPort;	// 40 = 0x28
    _Bool _allowRTCPFB;	// 44 = 0x2c
}

+ (void)fillImageArray:(id)arg1 imageArray:(struct imageTag *)arg2;	// IMP=0x006000000024994c
+ (void)fillImageStruct:(id)arg1 imageStruct:(struct imageTag *)arg2;	// IMP=0x0060000000249428
+ (void)fillImageStructWithDictionary:(id)arg1 forInterface:(int)arg2 imageStruct:(struct imageTag *)arg3;	// IMP=0x00600000002492ef
@property(readonly, nonatomic) _Bool allowRTCPFB; // @synthesize allowRTCPFB=_allowRTCPFB;
@property(retain, nonatomic) VCImageAttributeRules *imageAttributeRules; // @synthesize imageAttributeRules=_imageAttributeRules;
@property(readonly, nonatomic) NSArray *payloads; // @synthesize payloads=_payloads;
@property(readonly, nonatomic) NSArray *attributes; // @synthesize attributes=_attributes;
@property(readonly, nonatomic) int rtcpPort; // @synthesize rtcpPort=_rtcpPort;
@property(readonly, nonatomic) int rtpPort; // @synthesize rtpPort=_rtpPort;
@property(nonatomic) unsigned int rtpId; // @synthesize rtpId=_rtpId;
@property(readonly, nonatomic) NSString *string;
- (void)parseMediaLine:(id)arg1;	// IMP=0x000000000024a6b2
- (void)parseAttribute:(id)arg1;	// IMP=0x000000000024a3e4
- (void)parseImageAttributeRules:(id)arg1;	// IMP=0x0000000000249fdb
- (_Bool)videoDisplayAttribute:(int *)arg1 withHeight:(int *)arg2;	// IMP=0x0000000000249abe
- (_Bool)supportImage:(id)arg1 width:(int)arg2 height:(int)arg3 rate:(int)arg4;	// IMP=0x00000000002499d8
- (id)getVideoRecvImages:(id)arg1;	// IMP=0x0000000000248fa6
- (id)getVideoSendImages:(id)arg1;	// IMP=0x0000000000248c5d
- (id)videoImageAttributes:(int)arg1;	// IMP=0x0000000000248a3c
- (void)createVideoImageAttr:(int)arg1 direction:(int)arg2 dimensions:(struct imageTag *)arg3 count:(int)arg4;	// IMP=0x000000000024897c
- (void)addWifiRules:(id)arg1 cellularRules:(id)arg2 payload:(int)arg3 direction:(int)arg4;	// IMP=0x0000000000248833
- (void)addImageAttributeRules:(id)arg1 transportType:(unsigned char)arg2 payload:(int)arg3 direction:(int)arg4 attributeString:(id)arg5;	// IMP=0x0000000000248618
- (void)appendPayload:(int)arg1 dimensions:(struct imageTag *)arg2 direction:(int)arg3 attributeString:(id)arg4;	// IMP=0x000000000024849b
- (void)addVideoImageAttr:(id)arg1 ForPayload:(int)arg2;	// IMP=0x00000000002482b7
- (void)addPayload:(int)arg1 rtpMap:(id)arg2 formatParameters:(id)arg3;	// IMP=0x0000000000248201
- (void)addAttribute:(id)arg1;	// IMP=0x00000000002481eb
- (void)dealloc;	// IMP=0x0000000000248177
- (id)initWithParser:(id)arg1 rtpPort:(int)arg2 payloads:(id)arg3;	// IMP=0x0000000000248092
- (id)init;	// IMP=0x0000000000247fee

@end
