//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSModelObjectCacheGeneration, MSOverlayColorSettings, NSColorSpace, NSSet;

@interface MSRenderPassState : NSObject
{
    void *_document;
    MSModelObjectCacheGeneration *_pageCacheGeneration;
    NSSet *_selectedLayerIDs;
    unsigned long long _overlayRenderOptions;
    NSColorSpace *_canvasColorSpace;
    MSOverlayColorSettings *_colors;
    struct MSRenderingParameters _renderingParameters;
}

+ (id)stateWithPage:(id)arg1 document:(id)arg2 renderingParameters:(const struct MSRenderingParameters *)arg3 pageOverlayRenderOptions:(unsigned long long)arg4 canvasColorSpace:(id)arg5 overlayColors:(id)arg6;
@property(readonly, nonatomic) MSOverlayColorSettings *colors; // @synthesize colors=_colors;
@property(readonly, nonatomic) NSColorSpace *canvasColorSpace; // @synthesize canvasColorSpace=_canvasColorSpace;
@property(readonly, nonatomic) unsigned long long overlayRenderOptions; // @synthesize overlayRenderOptions=_overlayRenderOptions;
@property(readonly, copy, nonatomic) NSSet *selectedLayerIDs; // @synthesize selectedLayerIDs=_selectedLayerIDs;
@property(readonly, copy, nonatomic) MSModelObjectCacheGeneration *pageCacheGeneration; // @synthesize pageCacheGeneration=_pageCacheGeneration;
@property(readonly, nonatomic) void *document; // @synthesize document=_document;
@property(readonly, nonatomic) struct MSRenderingParameters renderingParameters; // @synthesize renderingParameters=_renderingParameters;
- (void).cxx_destruct;
- (unsigned long long)traitsDifferingFromState:(id)arg1;
- (id)initWithPage:(id)arg1 document:(id)arg2 renderingParameters:(const struct MSRenderingParameters *)arg3 pageOverlayRenderOptions:(unsigned long long)arg4 canvasColorSpace:(id)arg5 overlayColors:(id)arg6;

@end

