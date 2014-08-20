/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: com.tencent.mm.sdk.platformtools.AnimationHelperImpl21below
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_COM_TENCENT_MM_SDK_PLATFORMTOOLS_ANIMATIONHELPERIMPL21BELOW_HPP_DECL
#define J2CPP_COM_TENCENT_MM_SDK_PLATFORMTOOLS_ANIMATIONHELPERIMPL21BELOW_HPP_DECL


namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { namespace animation { class Animation; } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace com { namespace tencent { namespace mm { namespace sdk { namespace platformtools { namespace BackwardSupportUtil_ { namespace AnimationHelper_ { class IHelper; } } } } } } } }


#include <android/view/View.hpp>
#include <android/view/animation/Animation.hpp>
#include <com/tencent/mm/sdk/platformtools/BackwardSupportUtil.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace com { namespace tencent { namespace mm { namespace sdk { namespace platformtools {

	class AnimationHelperImpl21below;
	class AnimationHelperImpl21below
		: public object<AnimationHelperImpl21below>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit AnimationHelperImpl21below(jobject jobj)
		: object<AnimationHelperImpl21below>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<com::tencent::mm::sdk::platformtools::BackwardSupportUtil_::AnimationHelper_::IHelper>() const;


		void cancelAnimation(local_ref< android::view::View >  const&, local_ref< android::view::animation::Animation >  const&);
	}; //class AnimationHelperImpl21below

} //namespace platformtools
} //namespace sdk
} //namespace mm
} //namespace tencent
} //namespace com

} //namespace j2cpp

#endif //J2CPP_COM_TENCENT_MM_SDK_PLATFORMTOOLS_ANIMATIONHELPERIMPL21BELOW_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_COM_TENCENT_MM_SDK_PLATFORMTOOLS_ANIMATIONHELPERIMPL21BELOW_HPP_IMPL
#define J2CPP_COM_TENCENT_MM_SDK_PLATFORMTOOLS_ANIMATIONHELPERIMPL21BELOW_HPP_IMPL

namespace j2cpp {



com::tencent::mm::sdk::platformtools::AnimationHelperImpl21below::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

com::tencent::mm::sdk::platformtools::AnimationHelperImpl21below::operator local_ref<com::tencent::mm::sdk::platformtools::BackwardSupportUtil_::AnimationHelper_::IHelper>() const
{
	return local_ref<com::tencent::mm::sdk::platformtools::BackwardSupportUtil_::AnimationHelper_::IHelper>(get_jobject());
}


void com::tencent::mm::sdk::platformtools::AnimationHelperImpl21below::cancelAnimation(local_ref< android::view::View > const &a0, local_ref< android::view::animation::Animation > const &a1)
{
	return call_method<
		com::tencent::mm::sdk::platformtools::AnimationHelperImpl21below::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::platformtools::AnimationHelperImpl21below::J2CPP_METHOD_NAME(1),
		com::tencent::mm::sdk::platformtools::AnimationHelperImpl21below::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(com::tencent::mm::sdk::platformtools::AnimationHelperImpl21below,"com/tencent/mm/sdk/platformtools/AnimationHelperImpl21below")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::AnimationHelperImpl21below,0,"<init>","()V")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::AnimationHelperImpl21below,1,"cancelAnimation","(Landroid/view/View;Landroid/view/animation/Animation;)V")

} //namespace j2cpp

#endif //J2CPP_COM_TENCENT_MM_SDK_PLATFORMTOOLS_ANIMATIONHELPERIMPL21BELOW_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION