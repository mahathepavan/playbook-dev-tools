
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_basic_BasicMenuUI$MenuDragMouseHandler__
#define __javax_swing_plaf_basic_BasicMenuUI$MenuDragMouseHandler__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      namespace event
      {
          class MenuDragMouseEvent;
      }
      namespace plaf
      {
        namespace basic
        {
            class BasicMenuUI;
            class BasicMenuUI$MenuDragMouseHandler;
        }
      }
    }
  }
}

class javax::swing::plaf::basic::BasicMenuUI$MenuDragMouseHandler : public ::java::lang::Object
{

  BasicMenuUI$MenuDragMouseHandler(::javax::swing::plaf::basic::BasicMenuUI *);
public:
  virtual void menuDragMouseDragged(::javax::swing::event::MenuDragMouseEvent *);
  virtual void menuDragMouseEntered(::javax::swing::event::MenuDragMouseEvent *);
  virtual void menuDragMouseExited(::javax::swing::event::MenuDragMouseEvent *);
  virtual void menuDragMouseReleased(::javax::swing::event::MenuDragMouseEvent *);
public: // actually package-private
  BasicMenuUI$MenuDragMouseHandler(::javax::swing::plaf::basic::BasicMenuUI *, ::javax::swing::plaf::basic::BasicMenuUI$MenuDragMouseHandler *);
  ::javax::swing::plaf::basic::BasicMenuUI * __attribute__((aligned(__alignof__( ::java::lang::Object)))) this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_plaf_basic_BasicMenuUI$MenuDragMouseHandler__
